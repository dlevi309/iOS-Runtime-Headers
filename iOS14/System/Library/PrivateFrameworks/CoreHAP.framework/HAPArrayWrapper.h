/*
* Generated on Thursday, January 14, 2021 at 2:27:32 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreHAP.framework/CoreHAP
*/

#import <CoreHAP/HAPFieldWrapper.h>

@class NSArray;

@interface HAPArrayWrapper : HAPFieldWrapper {

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

