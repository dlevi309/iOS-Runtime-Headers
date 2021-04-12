/*
* Generated on Monday, March 1, 2021 at 2:30:42 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/IDSFoundation.framework/IDSFoundation
*/

@class NSString;


@protocol IDSLink <NSObject>
@property (retain) NSString * cbuuid; 
@property (retain) NSString * deviceUniqueID; 
@property (getter=linkTypeString,readonly) NSString * linkTypeString; 
@property (readonly) unsigned long long state; 
@property (readonly) unsigned long long headerOverhead; 
@property (__weak) id<IDSLinkDelegate> delegate; 
@property (__weak) id<IDSLinkDelegate> alternateDelegate; 
@optional
-(void)start;

@required
-(id<IDSLinkDelegate>)delegate;
-(void)setDelegate:(id)arg1;
-(unsigned long long)state;
-(NSString *)cbuuid;
-(unsigned long long)sendPacketBufferArray:(*)arg1 arraySize:(int)arg2 toDeviceUniqueID:(id)arg3 cbuuid:(id)arg4;
-(unsigned long long)sendPacketBuffer:(/*function pointer*/void**)arg1 toDeviceUniqueID:(id)arg2 cbuuid:(id)arg3;
-(id)generateLinkReport:(double)arg1 isCurrentLink:(BOOL)arg2;
-(id)copyLinkStatsDict;
-(void)setCbuuid:(id)arg1;
-(NSString *)deviceUniqueID;
-(void)setDeviceUniqueID:(id)arg1;
-(NSString *)linkTypeString;
-(unsigned long long)headerOverhead;
-(id<IDSLinkDelegate>)alternateDelegate;
-(void)setAlternateDelegate:(id)arg1;

@end

