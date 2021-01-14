/*
* Generated on Thursday, January 14, 2021 at 2:26:38 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
*/


@class NSString;

@interface RLMSortDescriptor : NSObject {

	BOOL _ascending;
	NSString* _keyPath;

}

@property (nonatomic,readonly) NSString * keyPath;              //@synthesize keyPath=_keyPath - In the implementation block
@property (nonatomic,readonly) BOOL ascending;                  //@synthesize ascending=_ascending - In the implementation block
+(id)sortDescriptorWithKeyPath:(id)arg1 ascending:(BOOL)arg2 ;
-(id)reversedSortDescriptor;
-(BOOL)ascending;
-(NSString *)keyPath;
@end

