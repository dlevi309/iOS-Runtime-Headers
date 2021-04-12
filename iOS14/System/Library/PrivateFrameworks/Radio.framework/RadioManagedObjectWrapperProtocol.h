/*
* Generated on Thursday, January 14, 2021 at 2:28:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

