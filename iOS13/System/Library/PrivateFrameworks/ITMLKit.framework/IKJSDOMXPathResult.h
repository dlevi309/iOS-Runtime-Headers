/*
* Generated on Monday, March 1, 2021 at 2:31:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
*/

@class NSString, IKDOMNode;


@protocol IKJSDOMXPathResult <JSExport>
@property (nonatomic,readonly) long long resultType; 
@property (nonatomic,readonly) long long numberValue; 
@property (nonatomic,__weak,readonly) NSString * stringValue; 
@property (nonatomic,readonly) BOOL booleanValue; 
@property (nonatomic,__weak,readonly) IKDOMNode * singleNodeValue; 
@property (nonatomic,readonly) BOOL invalidIteratorState; 
@property (nonatomic,readonly) long long snapshotLength; 
@required
-(NSString *)stringValue;
-(long long)resultType;
-(long long)numberValue;
-(BOOL)booleanValue;
-(IKDOMNode *)singleNodeValue;
-(BOOL)invalidIteratorState;
-(long long)snapshotLength;
-(id)iterateNext;
-(id)snapshotItem:(long long)arg1;

@end

