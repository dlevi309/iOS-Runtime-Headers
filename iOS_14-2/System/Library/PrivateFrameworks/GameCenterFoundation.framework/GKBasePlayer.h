/*
* Generated on Thursday, January 14, 2021 at 2:24:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation
*/


@class NSString;

@interface GKBasePlayer : NSObject

@property (nonatomic,retain,readonly) NSString * playerID; 
@property (nonatomic,readonly) NSString * displayName; 
+(BOOL)supportsSecureCoding;
-(NSString *)playerID;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)displayName;
@end

