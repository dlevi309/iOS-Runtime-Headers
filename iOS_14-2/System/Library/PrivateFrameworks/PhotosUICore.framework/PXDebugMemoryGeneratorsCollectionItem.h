/*
* Generated on Thursday, January 14, 2021 at 2:22:36 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/


@class NSString, NSDictionary, PHMemory;

@interface PXDebugMemoryGeneratorsCollectionItem : NSObject {

	NSString* _name;
	NSString* _description;
	NSDictionary* _options;
	PHMemory* _memory;
	NSString* _rejectionCause;

}

@property (readonly) NSString * name;                        //@synthesize name=_name - In the implementation block
@property (readonly) NSString * description;                 //@synthesize description=_description - In the implementation block
@property (readonly) NSDictionary * options;                 //@synthesize options=_options - In the implementation block
@property (readonly) PHMemory * memory;                      //@synthesize memory=_memory - In the implementation block
@property (readonly) NSString * rejectionCause;              //@synthesize rejectionCause=_rejectionCause - In the implementation block
-(PHMemory *)memory;
-(id)initWithOptions:(id)arg1 ;
-(NSDictionary *)options;
-(NSString *)name;
-(NSString *)description;
-(NSString *)rejectionCause;
-(id)initWithMemory:(id)arg1 memoryInfo:(id)arg2 ;
@end

