/*
* Generated on Monday, March 1, 2021 at 2:33:35 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SignpostSupport.framework/SignpostSupport
*/


@class NSObject;

@interface SignpostSupportMessageArgument : NSObject {

	unsigned char _type;
	NSObject* _argumentObject;

}

@property (nonatomic,readonly) unsigned char type;                     //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) NSObject * argumentObject;              //@synthesize argumentObject=_argumentObject - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned char)type;
-(NSObject *)argumentObject;
-(id)initWithArgumentObject:(id)arg1 ;
@end

