/*
* Generated on Monday, March 1, 2021 at 2:30:08 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/CFNetwork.framework/CFNetwork
*/


#import <CFNetwork/CFNetwork-Structs.h>
@interface __NSCFTCPIO_BlockCallbacks_Referent : NSObject {

	TCPIO_BlockCallbacks_Listener* _readListener;
	TCPIO_BlockCallbacks_Listener* _writeListener;

}
-(id)init;
-(void)dealloc;
-(void)setReadListener:(TCPIO_BlockCallbacks_Listener*)arg1 ;
-(void)setWriteListener:(TCPIO_BlockCallbacks_Listener*)arg1 ;
-(BOOL)withListeners:(/*^block*/id)arg1 ;
@end

