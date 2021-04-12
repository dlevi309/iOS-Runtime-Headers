/*
* Generated on Monday, March 1, 2021 at 2:34:35 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy,readonly) NSDictionary * dictionaryValue; 
@property (nonatomic,copy,readonly) NSString * wfName; 
+(BOOL)supportsSecureCoding;
+(id)JSONKeyPathsByPropertyKey;
+(id)childrenJSONTransformer;
-(NSString *)uuid;
-(NSString *)title;
-(NSArray *)children;
-(NSString *)storeId;
-(NSURL *)feedURL;
-(NSString *)wfName;
@end

