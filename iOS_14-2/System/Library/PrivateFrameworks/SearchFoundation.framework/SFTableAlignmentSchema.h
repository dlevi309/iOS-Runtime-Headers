/*
* Generated on Thursday, January 14, 2021 at 2:22:54 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SearchFoundation.framework/SearchFoundation
*/

#import <SearchFoundation/SearchFoundation-Structs.h>
#import <libobjc.A.dylib/SFTableAlignmentSchema.h>
@class NSArray, NSDictionary, NSData;


@protocol SFTableAlignmentSchema <NSObject>
@property (nonatomic,copy) NSArray * tableColumnAlignment; 
@property (nonatomic,copy) NSDictionary * metadata; 
@property (nonatomic,readonly) NSDictionary * dictionaryRepresentation; 
@property (nonatomic,readonly) NSData * jsonData; 
@required
-(NSDictionary *)dictionaryRepresentation;
-(void)setTableColumnAlignment:(id)arg1;
-(NSData *)jsonData;
-(NSArray *)tableColumnAlignment;
-(void)setMetadata:(id)arg1;
-(NSDictionary *)metadata;

@end

#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSArray, NSDictionary, NSData, NSString;

@interface SFTableAlignmentSchema : NSObject <SFTableAlignmentSchema, NSSecureCoding, NSCopying> {

	NSArray* _tableColumnAlignment;
	NSDictionary* _metadata;

}

@property (nonatomic,copy) NSArray * tableColumnAlignment;                           //@synthesize tableColumnAlignment=_tableColumnAlignment - In the implementation block
@property (nonatomic,copy) NSDictionary * metadata;                                  //@synthesize metadata=_metadata - In the implementation block
@property (nonatomic,readonly) NSDictionary * dictionaryRepresentation; 
@property (nonatomic,readonly) NSData * jsonData; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
-(NSDictionary *)dictionaryRepresentation;
-(void)setTableColumnAlignment:(NSArray *)arg1 ;
-(NSData *)jsonData;
-(void)encodeWithCoder:(id)arg1 ;
-(NSArray *)tableColumnAlignment;
-(void)setMetadata:(NSDictionary *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithProtobuf:(id)arg1 ;
-(NSDictionary *)metadata;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

