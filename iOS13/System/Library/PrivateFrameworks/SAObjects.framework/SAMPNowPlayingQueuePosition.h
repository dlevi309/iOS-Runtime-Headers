/*
* Generated on Monday, March 1, 2021 at 2:32:27 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
*/

#import <SAObjects/AceObject.h>
#import <SAObjects/SAAceSerializable.h>

@class NSString;

@interface SAMPNowPlayingQueuePosition : AceObject <SAAceSerializable>

@property (assign,nonatomic) long long index; 
@property (assign,nonatomic) long long queueSize; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)nowPlayingQueuePosition;
+(id)nowPlayingQueuePositionWithDictionary:(id)arg1 context:(id)arg2 ;
-(long long)index;
-(id)groupIdentifier;
-(void)setIndex:(long long)arg1 ;
-(void)setQueueSize:(long long)arg1 ;
-(id)encodedClassName;
-(long long)queueSize;
@end

