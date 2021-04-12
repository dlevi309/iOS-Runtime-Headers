/*
* Generated on Monday, March 1, 2021 at 2:31:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
*/


@class NSMutableDictionary, IKAppContext;

@interface IKJSArrayBufferStore : NSObject {

	NSMutableDictionary* _bufferStorage;
	IKAppContext* _appContext;

}

@property (nonatomic,readonly) NSMutableDictionary * bufferStorage;              //@synthesize bufferStorage=_bufferStorage - In the implementation block
@property (nonatomic,__weak,readonly) IKAppContext * appContext;                 //@synthesize appContext=_appContext - In the implementation block
-(IKAppContext *)appContext;
-(id)initWithAppContext:(id)arg1 ;
-(NSMutableDictionary *)bufferStorage;
-(id)arrayBufferForData:(id)arg1 ;
@end

