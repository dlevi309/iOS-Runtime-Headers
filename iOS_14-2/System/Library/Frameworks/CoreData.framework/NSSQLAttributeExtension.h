/*
* Generated on Thursday, January 14, 2021 at 2:21:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
*/

@class NSArray;


@protocol NSSQLAttributeExtension <NSObject>
@property (nonatomic,readonly) NSArray * insertSQLStrings; 
@property (nonatomic,readonly) NSArray * dropSQLStrings; 
@property (nonatomic,readonly) NSArray * bulkUpdateSQLStrings; 
@required
-(BOOL)validate:(id*)arg1;
-(NSArray *)insertSQLStrings;
-(BOOL)isEqualToExtension:(id)arg1;
-(NSArray *)bulkUpdateSQLStrings;
-(id)initWithObjectFromUserInfo:(id)arg1 onAttributeNamed:(id)arg2 onEntity:(id)arg3;
-(NSArray *)dropSQLStrings;

@end

