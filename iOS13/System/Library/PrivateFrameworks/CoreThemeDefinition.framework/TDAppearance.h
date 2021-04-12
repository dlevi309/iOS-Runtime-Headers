/*
* Generated on Monday, March 1, 2021 at 2:34:45 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CoreThemeDefinition.framework/CoreThemeDefinition
*/

#import <CoreData/NSManagedObject.h>

@class NSString;

@interface TDAppearance : NSManagedObject {

	NSString* _name;
	unsigned short _identifier;

}

@property (nonatomic,copy) NSString * name; 
@property (assign,nonatomic) unsigned short identifier; 
-(NSString *)name;
-(void)setName:(NSString *)arg1 ;
-(unsigned short)identifier;
-(void)setIdentifier:(unsigned short)arg1 ;
@end

