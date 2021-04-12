/*
* Generated on Monday, March 1, 2021 at 2:33:34 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <HomeKitDaemon/HMDFieldWrapper.h>

@class NSArray;

@interface HMDArrayWrapper : HMDFieldWrapper {

	NSArray* _field;
	/*^block*/id _objectCreator;

}

@property (nonatomic,retain) NSArray * field;              //@synthesize field=_field - In the implementation block
@property (nonatomic,copy) id objectCreator;               //@synthesize objectCreator=_objectCreator - In the implementation block
+(id)wrappertlv:(unsigned long long)arg1 name:(id)arg2 objectCreator:(/*^block*/id)arg3 ;
-(NSArray *)field;
-(void)setField:(NSArray *)arg1 ;
-(void)setObjectCreator:(id)arg1 ;
-(id)objectCreator;
@end

