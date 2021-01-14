/*
* Generated on Thursday, January 14, 2021 at 2:23:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Translation.framework/Translation
*/

#import <Translation/Translation-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSData;

@interface _LTTranslationSpan : NSObject <NSSecureCoding> {

	BOOL _shouldTranslate;
	NSString* _identifier;
	NSData* _metaInfoData;
	NSRange _range;

}

@property (nonatomic,readonly) NSString * identifier;              //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,readonly) NSRange range;                      //@synthesize range=_range - In the implementation block
@property (assign,nonatomic) BOOL shouldTranslate;                 //@synthesize shouldTranslate=_shouldTranslate - In the implementation block
@property (nonatomic,copy) NSData * metaInfoData;                  //@synthesize metaInfoData=_metaInfoData - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSRange)range;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setMetaInfoData:(NSData *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithIdentifier:(id)arg1 range:(NSRange)arg2 ;
-(BOOL)shouldTranslate;
-(NSData *)metaInfoData;
-(NSString *)identifier;
-(BOOL)isEqual:(id)arg1 ;
-(void)setShouldTranslate:(BOOL)arg1 ;
@end

