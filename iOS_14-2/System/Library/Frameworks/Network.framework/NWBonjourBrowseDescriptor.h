/*
* Generated on Thursday, January 14, 2021 at 2:22:59 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Network.framework/Network
*/

#import <Network/NWBrowseDescriptor.h>

@class NSString;

@interface NWBonjourBrowseDescriptor : NWBrowseDescriptor

@property (nonatomic,readonly) NSString * type; 
@property (nonatomic,readonly) NSString * domain; 
+(unsigned)descriptorType;
+(id)descriptorWithType:(id)arg1 domain:(id)arg2 ;
-(NSString *)domain;
-(id)descriptionWithIndent:(int)arg1 showFullContent:(BOOL)arg2 ;
-(NSString *)type;
@end

