/*
* Generated on Monday, March 1, 2021 at 2:32:40 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
*/

#import <libobjc.A.dylib/FCPrivateDataSyncAvailability.h>

@protocol FCPrivateDataSyncAvailability
@property (getter=isPrivateDataSyncingAllowed,nonatomic,readonly) BOOL privateDataSyncingAllowed; 
@required
-(BOOL)isPrivateDataSyncingAllowed;

@end


@class NSArray;

@interface FCPrivateDataSyncAvailability : NSObject <FCPrivateDataSyncAvailability> {

	NSArray* _conditions;

}

@property (nonatomic,copy,readonly) NSArray * conditions;                                                      //@synthesize conditions=_conditions - In the implementation block
@property (getter=isPrivateDataSyncingAllowed,nonatomic,readonly) BOOL privateDataSyncingAllowed; 
+(id)defaultAvailability;
+(id)notAvailable;
-(NSArray *)conditions;
-(BOOL)isPrivateDataSyncingAllowed;
-(id)initWithConditions:(id)arg1 ;
@end

