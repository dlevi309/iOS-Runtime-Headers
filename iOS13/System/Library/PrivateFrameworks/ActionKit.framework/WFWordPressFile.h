/*
* Generated on Monday, March 1, 2021 at 2:34:35 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
*/

#import <WorkflowKit/MTLModel.h>
#import <libobjc.A.dylib/MTLJSONSerializing.h>

@class NSNumber, NSString, NSURL, NSDictionary;

@interface WFWordPressFile : MTLModel <MTLJSONSerializing> {

	NSNumber* _fileId;
	NSString* _filename;
	NSURL* _url;
	NSString* _type;

}

@property (nonatomic,copy,readonly) NSNumber * fileId;                           //@synthesize fileId=_fileId - In the implementation block
@property (nonatomic,copy,readonly) NSString * filename;                         //@synthesize filename=_filename - In the implementation block
@property (nonatomic,copy,readonly) NSURL * url;                                 //@synthesize url=_url - In the implementation block
@property (nonatomic,copy,readonly) NSString * type;                             //@synthesize type=_type - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy,readonly) NSDictionary * dictionaryValue; 
+(id)JSONKeyPathsByPropertyKey;
+(id)fileIdJSONTransformer;
-(NSString *)type;
-(NSURL *)url;
-(NSString *)filename;
-(NSNumber *)fileId;
@end

