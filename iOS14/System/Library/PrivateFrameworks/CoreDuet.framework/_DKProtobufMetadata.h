/*
* Generated on Thursday, January 14, 2021 at 2:20:50 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
*/

#import <libobjc.A.dylib/_DKProtobufConverting.h>

@class NSDictionary, NSString;

@interface _DKProtobufMetadata : NSObject <_DKProtobufConverting> {

	NSDictionary* _dictionary;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSDictionary * dictionary;              //@synthesize dictionary=_dictionary - In the implementation block
+(id)createFromData:(id)arg1 ;
+(id)fromPBCodable:(id)arg1 ;
-(id)toPBCodable;
-(id)initWithDictionary:(id)arg1 ;
-(NSDictionary *)dictionary;
-(id)asData;
@end

