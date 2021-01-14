/*
* Generated on Thursday, January 14, 2021 at 2:21:44 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(NSString *)sectionHeaderLineKey;
-(NSString *)localizedLede;
-(void)setLocalizedLede:(NSString *)arg1 ;
-(NSString *)localizedSectionHeaderLine;
-(void)setLocalizedSectionHeaderLine:(NSString *)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)localizedBody;
-(void)setLocalizedBody:(NSString *)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(NSString *)bodyKey;
-(NSString *)ledeKey;
-(id)description;
-(void)localizeWithBundle:(id)arg1 ;
-(void)localizeWithBundle:(id)arg1 table:(id)arg2 ;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(long long)style;
-(BOOL)isEqual:(id)arg1 ;
@end

