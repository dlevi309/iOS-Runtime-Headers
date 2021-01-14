/*
* Generated on Thursday, January 14, 2021 at 2:22:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
*/


@protocol PLValidatedManagedObject;
@class NSManagedObject, NSArray;

@interface PLManagedObjectValidationResult : NSObject {

	BOOL _status;
	NSManagedObject*<PLValidatedManagedObject> _validatedObject;
	NSArray* _errorMessages;
	NSArray* _infoMessages;

}

@property (assign,nonatomic) BOOL status;                                                             //@synthesize status=_status - In the implementation block
@property (nonatomic,retain) NSManagedObject*<PLValidatedManagedObject> validatedObject;              //@synthesize validatedObject=_validatedObject - In the implementation block
@property (nonatomic,retain) NSArray * errorMessages;                                                 //@synthesize errorMessages=_errorMessages - In the implementation block
@property (nonatomic,retain) NSArray * infoMessages;                                                  //@synthesize infoMessages=_infoMessages - In the implementation block
-(NSManagedObject*<PLValidatedManagedObject>)validatedObject;
-(void)setValidatedObject:(NSManagedObject*<PLValidatedManagedObject>)arg1 ;
-(NSArray *)infoMessages;
-(void)setInfoMessages:(NSArray *)arg1 ;
-(NSArray *)errorMessages;
-(void)setErrorMessages:(NSArray *)arg1 ;
-(void)setStatus:(BOOL)arg1 ;
-(BOOL)status;
@end

