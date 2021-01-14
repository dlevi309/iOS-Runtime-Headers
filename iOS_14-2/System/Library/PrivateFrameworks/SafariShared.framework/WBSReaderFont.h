/*
* Generated on Thursday, January 14, 2021 at 2:23:14 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
+(id)systemFont;
+(id)fontWithFamilyName:(id)arg1 displayName:(id)arg2 ;
+(id)systemFontWithDisplayName:(id)arg1 ;
-(id)fontOfSize:(double)arg1 ;
-(void)isInstalledWithCompletionHandler:(/*^block*/id)arg1 ;
-(NSString *)familyName;
-(BOOL)isInstalled;
-(id)description;
-(id)_localizedName;
-(long long)type;
-(unsigned long long)hash;
-(NSString *)familyNameForWebContent;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)displayName;
-(id)_initWithFamilyName:(id)arg1 displayName:(id)arg2 type:(long long)arg3 ;
-(RetainPtr<const __CTFontDescriptor *>*)_fontDescriptorRefForFontFamilyName:(id)arg1 restrictToEnabled:(BOOL)arg2 ;
-(BOOL)isEqual:(id)arg1 ;
@end

