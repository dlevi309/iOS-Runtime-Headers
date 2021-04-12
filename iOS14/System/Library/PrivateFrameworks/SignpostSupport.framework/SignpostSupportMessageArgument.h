/*
* Generated on Thursday, January 14, 2021 at 2:28:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SignpostSupport.framework/SignpostSupport
*/


@class NSObject;

@interface SignpostSupportMessageArgument : NSObject {

	unsigned char _type;
	NSObject* _argumentObject;

}

@property (nonatomic,readonly) unsigned char type;                     //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) NSObject * argumentObject;              //@synthesize argumentObject=_argumentObject - In the implementation block
-(unsigned char)type;
-(BOOL)isEqual:(id)arg1 ;
-(NSObject *)argumentObject;
-(id)initWithArgumentObject:(id)arg1 ;
@end

