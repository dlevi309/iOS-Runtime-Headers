/*
* Generated on Thursday, January 14, 2021 at 2:27:09 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
*/

#import <WorkflowKit/MTLModel.h>
#import <libobjc.A.dylib/MTLJSONSerializing.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/WFNaming.h>

@class NSString, NSURL, NSArray, NSDictionary;

@interface WFPodcastShowObject : MTLModel <MTLJSONSerializing, NSSecureCoding, WFNaming> {

	NSString* _title;
	NSString* _uuid;
	NSString* _storeId;
	NSURL* _feedURL;
	NSArray* _children;

}

@property (nonatomic,readonly) NSString * title;                                 //@synthesize title=_title - In the implementation block
@property (nonatomic,readonly) NSString * uuid;                                  //@synthesize uuid=_uuid - In the implementation block
@property (nonatomic,readonly) NSString * storeId;                               //@synthesize storeId=_storeId - In the implementation block
@property (nonatomic,readonly) NSURL * feedURL;                                  //@synthesize feedURL=_feedURL - In the implementation block
@property (nonatomic,readonly) NSArray * children;                               //@synthesize children=_children - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * dictionaryValue; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy,readonly) NSString * wfName; 
+(BOOL)supportsSecureCoding;
+(id)JSONKeyPathsByPropertyKey;
+(id)childrenJSONTransformer;
-(NSArray *)children;
-(NSString *)uuid;
-(NSString *)storeId;
-(NSString *)wfName;
-(NSURL *)feedURL;
-(NSString *)title;
@end

