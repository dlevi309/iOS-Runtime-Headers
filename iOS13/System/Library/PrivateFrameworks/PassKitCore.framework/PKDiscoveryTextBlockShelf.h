/*
* Generated on Monday, March 1, 2021 at 2:31:53 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
*/

#import <PassKitCore/PKDiscoveryShelf.h>

@class NSString;

@interface PKDiscoveryTextBlockShelf : PKDiscoveryShelf {

	long long _style;
	NSString* _bodyKey;
	NSString* _ledeKey;
	NSString* _sectionHeaderLineKey;
	NSString* _localizedBody;
	NSString* _localizedLede;
	NSString* _localizedSectionHeaderLine;

}

@property (nonatomic,retain) NSString * localizedBody;                           //@synthesize localizedBody=_localizedBody - In the implementation block
@property (nonatomic,retain) NSString * localizedLede;                           //@synthesize localizedLede=_localizedLede - In the implementation block
@property (nonatomic,retain) NSString * localizedSectionHeaderLine;              //@synthesize localizedSectionHeaderLine=_localizedSectionHeaderLine - In the implementation block
@property (nonatomic,readonly) long long style;                                  //@synthesize style=_style - In the implementation block
@property (nonatomic,readonly) NSString * bodyKey;                               //@synthesize bodyKey=_bodyKey - In the implementation block
@property (nonatomic,readonly) NSString * ledeKey;                               //@synthesize ledeKey=_ledeKey - In the implementation block
@property (nonatomic,readonly) NSString * sectionHeaderLineKey;                  //@synthesize sectionHeaderLineKey=_sectionHeaderLineKey - In the implementation block
+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(long long)style;
-(NSString *)localizedBody;
-(void)setLocalizedBody:(NSString *)arg1 ;
-(NSString *)bodyKey;
-(void)localizeWithBundle:(id)arg1 ;
-(void)localizeWithBundle:(id)arg1 table:(id)arg2 ;
-(NSString *)ledeKey;
-(NSString *)sectionHeaderLineKey;
-(NSString *)localizedLede;
-(void)setLocalizedLede:(NSString *)arg1 ;
-(NSString *)localizedSectionHeaderLine;
-(void)setLocalizedSectionHeaderLine:(NSString *)arg1 ;
@end

