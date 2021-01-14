/*
* Generated on Thursday, January 14, 2021 at 2:25:57 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

