/*
* Generated on Monday, March 1, 2021 at 2:30:57 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(BOOL)status;
-(void)setStatus:(BOOL)arg1 ;
-(NSArray *)errorMessages;
-(void)setErrorMessages:(NSArray *)arg1 ;
-(NSManagedObject*<PLValidatedManagedObject>)validatedObject;
-(void)setValidatedObject:(NSManagedObject*<PLValidatedManagedObject>)arg1 ;
-(NSArray *)infoMessages;
-(void)setInfoMessages:(NSArray *)arg1 ;
@end

