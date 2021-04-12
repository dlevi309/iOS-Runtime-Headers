/*
* Generated on Thursday, January 14, 2021 at 2:26:40 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
*/

#import <WorkflowKit/WFiTunesStoreObject.h>
#import <libobjc.A.dylib/MTLJSONSerializing.h>

@class NSString, NSNumber, NSDictionary;

@interface WFiTunesCollectionObject : WFiTunesStoreObject <MTLJSONSerializing> {

	NSString* _type;
	NSString* _genre;
	NSNumber* _trackCount;

}

@property (nonatomic,readonly) NSString * type;                                  //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) NSString * genre;                                 //@synthesize genre=_genre - In the implementation block
@property (nonatomic,readonly) NSNumber * trackCount;                            //@synthesize trackCount=_trackCount - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * dictionaryValue; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)JSONKeyPathsByPropertyKey;
-(NSString *)genre;
-(NSNumber *)trackCount;
-(NSString *)type;
@end

