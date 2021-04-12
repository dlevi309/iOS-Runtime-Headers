/*
* Generated on Thursday, January 14, 2021 at 2:22:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Sleep.framework/Sleep
*/


@class NSString;

@interface HKSPPropertyModification : NSObject {

	BOOL _modified;
	NSString* _propertyName;
	/*^block*/id _performBlock;

}

@property (nonatomic,readonly) NSString * propertyName;              //@synthesize propertyName=_propertyName - In the implementation block
@property (nonatomic,readonly) BOOL modified;                        //@synthesize modified=_modified - In the implementation block
@property (nonatomic,copy,readonly) id performBlock;                 //@synthesize performBlock=_performBlock - In the implementation block
+(id)modificationWithPropertyName:(id)arg1 modified:(BOOL)arg2 performBlock:(/*^block*/id)arg3 ;
-(BOOL)modified;
-(id)performBlock;
-(NSString *)propertyName;
@end

