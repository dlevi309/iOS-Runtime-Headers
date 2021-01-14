/*
* Generated on Thursday, January 14, 2021 at 2:27:35 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreThemeDefinition.framework/CoreThemeDefinition
*/

#import <CoreData/NSManagedObject.h>

@class NSString, TDPhotoshopRenditionSpec;

@interface TDPhotoshopLayer : NSManagedObject

@property (nonatomic,retain) NSString * name; 
@property (nonatomic,retain) TDPhotoshopLayer * childLayer; 
@property (nonatomic,retain) TDPhotoshopLayer * parentLayer; 
@property (nonatomic,retain) TDPhotoshopRenditionSpec * rendition; 
-(id)hierarchicalLayerNames;
@end

