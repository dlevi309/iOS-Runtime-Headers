/*
* Generated on Thursday, January 14, 2021 at 2:21:53 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
*/

#import <libobjc.A.dylib/MLFeatureProvider.h>

@class MLMultiArray, NSSet;

@interface FCUserVectorModelOutput : NSObject <MLFeatureProvider> {

	MLMultiArray* _user_vector;

}

@property (nonatomic,retain) MLMultiArray * user_vector;              //@synthesize user_vector=_user_vector - In the implementation block
@property (nonatomic,readonly) NSSet * featureNames; 
-(id)featureValueForName:(id)arg1 ;
-(NSSet *)featureNames;
-(MLMultiArray *)user_vector;
-(id)initWithUser_vector:(id)arg1 ;
-(void)setUser_vector:(MLMultiArray *)arg1 ;
@end

