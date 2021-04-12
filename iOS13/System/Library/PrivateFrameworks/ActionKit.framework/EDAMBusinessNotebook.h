/*
* Generated on Monday, March 1, 2021 at 2:34:36 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
*/

#import <ActionKit/FATObject.h>

@class NSString, NSNumber;

@interface EDAMBusinessNotebook : FATObject {

	NSString* _notebookDescription;
	NSNumber* _privilege;
	NSNumber* _recommended;

}

@property (nonatomic,retain) NSString * notebookDescription;              //@synthesize notebookDescription=_notebookDescription - In the implementation block
@property (nonatomic,retain) NSNumber * privilege;                        //@synthesize privilege=_privilege - In the implementation block
@property (nonatomic,retain) NSNumber * recommended;                      //@synthesize recommended=_recommended - In the implementation block
+(id)structName;
+(id)structFields;
-(NSNumber *)privilege;
-(void)setPrivilege:(NSNumber *)arg1 ;
-(NSString *)notebookDescription;
-(void)setNotebookDescription:(NSString *)arg1 ;
-(NSNumber *)recommended;
-(void)setRecommended:(NSNumber *)arg1 ;
@end

