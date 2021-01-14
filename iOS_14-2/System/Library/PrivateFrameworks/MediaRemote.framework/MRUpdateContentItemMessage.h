/*
* Generated on Thursday, January 14, 2021 at 2:21:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
*/

#import <MediaRemote/MRProtocolMessage.h>

@class MRPlayerPath, NSArray;

@interface MRUpdateContentItemMessage : MRProtocolMessage

@property (nonatomic,readonly) MRPlayerPath * playerPath; 
@property (nonatomic,readonly) NSArray * contentItems; 
-(NSArray *)contentItems;
-(id)initWithContentItems:(id)arg1 forPlayerPath:(id)arg2 ;
-(MRPlayerPath *)playerPath;
-(unsigned long long)type;
-(unsigned long long)priority;
@end

