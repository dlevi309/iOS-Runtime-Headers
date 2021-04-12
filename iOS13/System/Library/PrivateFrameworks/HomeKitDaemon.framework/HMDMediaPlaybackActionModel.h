/*
* Generated on Monday, March 1, 2021 at 2:33:34 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <HomeKitDaemon/HMDActionModel.h>

@class NSSet, NSNumber, MPPlaybackArchive;

@interface HMDMediaPlaybackActionModel : HMDActionModel

@property (nonatomic,retain) NSSet * profiles; 
@property (nonatomic,retain) NSSet * accessories; 
@property (nonatomic,retain) NSSet * services; 
@property (nonatomic,retain) NSNumber * volume; 
@property (nonatomic,retain) MPPlaybackArchive * encodedPlaybackArchive; 
@property (nonatomic,retain) NSNumber * state; 
+(id)properties;
+(id)schemaHashRoot;
-(id)validate;
-(id)dependentUUIDs;
-(void)loadModelWithActionInformation:(id)arg1 ;
-(BOOL)validForStorage;
@end

