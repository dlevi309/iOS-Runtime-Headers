/*
* Generated on Thursday, January 14, 2021 at 2:25:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
*/


@class NSArray;

@interface IKJSManagedArray : NSObject {

	id _ownerObject;
	NSArray* _managedArray;

}

@property (nonatomic,retain) id ownerObject;                      //@synthesize ownerObject=_ownerObject - In the implementation block
@property (nonatomic,retain) NSArray * managedArray;              //@synthesize managedArray=_managedArray - In the implementation block
-(void)dealloc;
-(NSArray *)managedArray;
-(id)ownerObject;
-(void)setManagedArray:(NSArray *)arg1 ;
-(id)initWithArray:(id)arg1 ownerObject:(id)arg2 ;
-(id)jsValuesWithContext:(id)arg1 ;
-(void)setOwnerObject:(id)arg1 ;
@end

