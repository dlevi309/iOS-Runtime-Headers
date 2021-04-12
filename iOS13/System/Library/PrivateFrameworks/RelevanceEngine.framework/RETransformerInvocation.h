/*
* Generated on Monday, March 1, 2021 at 2:34:18 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
*/


#import <RelevanceEngine/RelevanceEngine-Structs.h>
@interface RETransformerInvocation : NSObject {

	vector<unsigned long, std::__1::allocator<unsigned long> >* _values;

}

@property (nonatomic,readonly) unsigned long long numberOfArguments; 
+(id)invocationWithArguments:(unsigned long long*)arg1 count:(unsigned long long)arg2 ;
-(id)init;
-(void)dealloc;
-(unsigned long long)numberOfArguments;
-(void)setArgument:(unsigned long long)arg1 atIndex:(unsigned long long)arg2 ;
-(unsigned long long)getArgumentAtIndex:(unsigned long long)arg1 ;
@end

