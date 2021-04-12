/*
* Generated on Monday, March 1, 2021 at 2:34:27 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Radio.framework/Radio
*/

@class NSManagedObject, RadioModel;


@protocol RadioManagedObjectWrapperProtocol <NSObject>
@property (getter=isDatabaseBacked,nonatomic,readonly) BOOL databaseBacked; 
@property (nonatomic,readonly) NSManagedObject * managedObject; 
@property (nonatomic,readonly) RadioModel * model; 
@required
-(RadioModel *)model;
-(NSManagedObject *)managedObject;
-(BOOL)isDatabaseBacked;
-(id)initWithModel:(id)arg1 managedObject:(id)arg2;

@end

