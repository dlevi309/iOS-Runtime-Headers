/*
* Generated on Monday, March 1, 2021 at 2:33:55 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/IPTelephony.framework/Support/libIPTelephony.dylib
*/


#import <libIPTelephony.dylib/libIPTelephony.dylib-Structs.h>
@class NWPathEvaluator;

@interface ImsNetworkPath : NSObject {

	NWPathEvaluator* _pathEvaluator;
	ImsNetworkPathDelegate* _delegate;
	basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > _ifaceName;

}
-(void)dealloc;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >)ifaceName;
-(id)initWithInterface:(basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >)arg1 delegate:(ImsNetworkPathDelegate*)arg2 ;
-(void)evaluateInterface;
@end

