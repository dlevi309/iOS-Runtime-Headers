/*
* Generated on Thursday, January 14, 2021 at 2:25:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/IPTelephony.framework/Support/libIPTelephony.dylib
*/


#import <libIPTelephony.dylib/libIPTelephony.dylib-Structs.h>
@class NWPathEvaluator;

@interface ImsNetworkPath : NSObject {

	NWPathEvaluator* _pathEvaluator;
	ImsNetworkPathDelegate* _delegate;
	basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > _ifaceName;
	BOOL _observingPath;

}
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(void)dealloc;
-(basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >)ifaceName;
-(id)initWithInterface:(basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >)arg1 delegate:(ImsNetworkPathDelegate*)arg2 ;
-(void)evaluateInterface;
@end

