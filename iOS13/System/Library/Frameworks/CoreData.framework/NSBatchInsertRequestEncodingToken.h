/*
* Generated on Monday, March 1, 2021 at 2:30:26 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSArray, NSInputStream;

@interface NSBatchInsertRequestEncodingToken : NSObject <NSSecureCoding> {

	NSString* _entityName;
	NSArray* _objectsToInsert;
	NSInputStream* _inputStream;
	unsigned long long _resultType;
	BOOL _secure;

}

@property (nonatomic,retain,readonly) NSString * entityName;                    //@synthesize entityName=_entityName - In the implementation block
@property (nonatomic,retain,readonly) NSArray * objectsToInsert;                //@synthesize objectsToInsert=_objectsToInsert - In the implementation block
@property (nonatomic,retain,readonly) NSInputStream * inputStream;              //@synthesize inputStream=_inputStream - In the implementation block
@property (nonatomic,readonly) unsigned long long resultType;                   //@synthesize resultType=_resultType - In the implementation block
@property (nonatomic,readonly) BOOL secure;                                     //@synthesize secure=_secure - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(unsigned long long)resultType;
-(NSString *)entityName;
-(NSInputStream *)inputStream;
-(NSArray *)objectsToInsert;
-(id)initForRequest:(id)arg1 ;
-(BOOL)secure;
@end

