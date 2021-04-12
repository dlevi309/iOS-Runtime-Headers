/*
* Generated on Monday, March 1, 2021 at 2:33:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
*/

#import <SafariShared/SafariShared-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface WBSReaderFont : NSObject <NSCopying> {

	NSString* _familyName;
	NSString* _displayName;
	NSString* _localizedName;
	BOOL _hasCalculatedLocalizedName;
	long long _type;

}

@property (nonatomic,readonly) NSString * familyName;                           //@synthesize familyName=_familyName - In the implementation block
@property (nonatomic,readonly) NSString * familyNameForWebContent; 
@property (nonatomic,readonly) NSString * displayName; 
@property (getter=isInstalled,nonatomic,readonly) BOOL installed; 
@property (nonatomic,readonly) long long type;                                  //@synthesize type=_type - In the implementation block
+(id)systemSerifFont;
+(id)systemFontWithDisplayName:(id)arg1 ;
+(id)systemFont;
+(id)fontWithFamilyName:(id)arg1 displayName:(id)arg2 ;
-(void)isInstalledWithCompletionHandler:(/*^block*/id)arg1 ;
-(id)fontOfSize:(double)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(long long)type;
-(NSString *)familyName;
-(id)_localizedName;
-(NSString *)displayName;
-(BOOL)isInstalled;
-(NSString *)familyNameForWebContent;
-(id)_initWithFamilyName:(id)arg1 displayName:(id)arg2 type:(long long)arg3 ;
-(RetainPtr<const __CTFontDescriptor *>*)_fontDescriptorRefForFontFamilyName:(id)arg1 restrictToEnabled:(BOOL)arg2 ;
@end

