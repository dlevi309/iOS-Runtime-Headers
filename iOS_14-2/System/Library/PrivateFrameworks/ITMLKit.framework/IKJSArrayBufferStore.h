/*
* Generated on Thursday, January 14, 2021 at 2:25:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

