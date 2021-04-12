/*
* Generated on Thursday, January 14, 2021 at 2:27:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
*/

#import <WorkflowKit/MTLModel.h>
#import <libobjc.A.dylib/MTLJSONSerializing.h>

@class NSURL, NSString, NSNumber, NSDate, NSDictionary;

@interface WFWunderlistFile : MTLModel <MTLJSONSerializing> {

	long long _fileId;
	long long _taskId;
	long long _listId;
	long long _userId;
	NSURL* _url;
	NSString* _filename;
	NSNumber* _fileSize;
	NSDate* _localCreatedAt;
	NSDate* _createdAt;
	NSDate* _updatedAt;
	long long _revision;

}

@property (nonatomic,readonly) long long fileId;                                 //@synthesize fileId=_fileId - In the implementation block
@property (nonatomic,readonly) long long taskId;                                 //@synthesize taskId=_taskId - In the implementation block
@property (nonatomic,readonly) long long listId;                                 //@synthesize listId=_listId - In the implementation block
@property (nonatomic,readonly) long long userId;                                 //@synthesize userId=_userId - In the implementation block
@property (nonatomic,readonly) NSURL * url;                                      //@synthesize url=_url - In the implementation block
@property (nonatomic,readonly) NSString * filename;                              //@synthesize filename=_filename - In the implementation block
@property (nonatomic,readonly) NSNumber * fileSize;                              //@synthesize fileSize=_fileSize - In the implementation block
@property (nonatomic,readonly) NSDate * localCreatedAt;                          //@synthesize localCreatedAt=_localCreatedAt - In the implementation block
@property (nonatomic,readonly) NSDate * createdAt;                               //@synthesize createdAt=_createdAt - In the implementation block
@property (nonatomic,readonly) NSDate * updatedAt;                               //@synthesize updatedAt=_updatedAt - In the implementation block
@property (nonatomic,readonly) long long revision;                               //@synthesize revision=_revision - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * dictionaryValue; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)JSONKeyPathsByPropertyKey;
+(id)urlJSONTransformer;
+(id)createdAtJSONTransformer;
+(id)updatedAtJSONTransformer;
+(id)localCreatedAtJSONTransformer;
-(long long)userId;
-(NSDate *)createdAt;
-(long long)taskId;
-(NSString *)filename;
-(NSNumber *)fileSize;
-(long long)fileId;
-(NSURL *)url;
-(long long)listId;
-(NSDate *)updatedAt;
-(long long)revision;
-(NSDate *)localCreatedAt;
@end

