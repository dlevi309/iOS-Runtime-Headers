/*
* Generated on Monday, March 1, 2021 at 2:35:25 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TrialProto.framework/TrialProto
*/


@class NSArray, NSString;

@interface TRIPBOneofDescriptor : NSObject {

	const char* name_;
	NSArray* fields_;
	SEL caseSel_;

}

@property (nonatomic,readonly) NSString * name; 
@property (nonatomic,readonly) NSArray * fields; 
-(void)dealloc;
-(NSString *)name;
-(NSArray *)fields;
-(id)initWithName:(const char*)arg1 fields:(id)arg2 ;
-(id)fieldWithNumber:(unsigned)arg1 ;
-(id)fieldWithName:(id)arg1 ;
@end

