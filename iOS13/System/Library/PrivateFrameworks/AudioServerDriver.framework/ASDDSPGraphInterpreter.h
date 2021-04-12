/*
* Generated on Monday, March 1, 2021 at 2:33:55 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AudioServerDriver.framework/AudioServerDriver
*/


#import <AudioServerDriver/AudioServerDriver-Structs.h>
@interface ASDDSPGraphInterpreter : NSObject {

	unique_ptr<DSPGraph::Interpreter, std::__1::default_delete<DSPGraph::Interpreter> >* _interpreter;

}
+(id)compileText:(id)arg1 withSubstitutions:(id)arg2 includingPaths:(id)arg3 ;
+(id)compileFile:(id)arg1 withSubstitutions:(id)arg2 includingPaths:(id)arg3 ;
+(unordered_map<std::__1::basic_string<char>, std::__1::basic_string<char>, std::__1::hash<std::__1::basic_string<char> >, std::__1::equal_to<std::__1::basic_string<char> >, std::__1::allocator<std::__1::pair<const std::__1::basic_string<char>, std::__1::basic_string<char> > > >*)stringMapFromStringDictionary:(id)arg1 ;
+(vector<std::__1::basic_string<char>, std::__1::allocator<std::__1::basic_string<char> > >*)stringVectorFromStringArray:(id)arg1 ;
-(id)init;
-(id)compileText:(id)arg1 withSubstitutions:(id)arg2 includingPaths:(id)arg3 ;
-(id)compileFile:(id)arg1 withSubstitutions:(id)arg2 includingPaths:(id)arg3 ;
@end

