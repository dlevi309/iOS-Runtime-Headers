/*
* Generated on Thursday, January 14, 2021 at 2:22:54 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SearchFoundation.framework/SearchFoundation
*/

#import <SearchFoundation/SearchFoundation-Structs.h>
#import <libobjc.A.dylib/SFTableColumnAlignment.h>
@class NSDictionary, NSData;


@protocol SFTableColumnAlignment <NSObject>
@property (assign,nonatomic) int columnAlignment; 
@property (assign,nonatomic) int dataAlignment; 
@property (assign,nonatomic) BOOL isEqualWidth; 
@property (nonatomic,readonly) NSDictionary * dictionaryRepresentation; 
@property (nonatomic,readonly) NSData * jsonData; 
@required
-(NSDictionary *)dictionaryRepresentation;
-(void)setColumnAlignment:(int)arg1;
-(void)setDataAlignment:(int)arg1;
-(void)setIsEqualWidth:(BOOL)arg1;
-(NSData *)jsonData;
-(int)columnAlignment;
-(int)dataAlignment;
-(BOOL)isEqualWidth;

@end

#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSDictionary, NSData, NSString;

@interface SFTableColumnAlignment : NSObject <SFTableColumnAlignment, NSSecureCoding, NSCopying> {

	SCD_Struct_SF3 _has;
	BOOL _isEqualWidth;
	int _columnAlignment;
	int _dataAlignment;

}

@property (assign,nonatomic) int columnAlignment;                                    //@synthesize columnAlignment=_columnAlignment - In the implementation block
@property (assign,nonatomic) int dataAlignment;                                      //@synthesize dataAlignment=_dataAlignment - In the implementation block
@property (assign,nonatomic) BOOL isEqualWidth;                                      //@synthesize isEqualWidth=_isEqualWidth - In the implementation block
@property (nonatomic,readonly) NSDictionary * dictionaryRepresentation; 
@property (nonatomic,readonly) NSData * jsonData; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
-(NSDictionary *)dictionaryRepresentation;
-(void)setColumnAlignment:(int)arg1 ;
-(void)setDataAlignment:(int)arg1 ;
-(void)setIsEqualWidth:(BOOL)arg1 ;
-(NSData *)jsonData;
-(void)encodeWithCoder:(id)arg1 ;
-(int)columnAlignment;
-(int)dataAlignment;
-(BOOL)isEqualWidth;
-(BOOL)hasColumnAlignment;
-(BOOL)hasDataAlignment;
-(BOOL)hasIsEqualWidth;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithProtobuf:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
@end
