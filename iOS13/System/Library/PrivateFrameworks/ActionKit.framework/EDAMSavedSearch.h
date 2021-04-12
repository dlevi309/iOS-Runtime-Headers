/*
* Generated on Monday, March 1, 2021 at 2:34:36 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
*/

#import <ActionKit/FATObject.h>

@class NSString, NSNumber, EDAMSavedSearchScope;

@interface EDAMSavedSearch : FATObject {

	NSString* _guid;
	NSString* _name;
	NSString* _query;
	NSNumber* _format;
	NSNumber* _updateSequenceNum;
	EDAMSavedSearchScope* _scope;

}

@property (nonatomic,retain) NSString * guid;                           //@synthesize guid=_guid - In the implementation block
@property (nonatomic,retain) NSString * name;                           //@synthesize name=_name - In the implementation block
@property (nonatomic,retain) NSString * query;                          //@synthesize query=_query - In the implementation block
@property (nonatomic,retain) NSNumber * format;                         //@synthesize format=_format - In the implementation block
@property (nonatomic,retain) NSNumber * updateSequenceNum;              //@synthesize updateSequenceNum=_updateSequenceNum - In the implementation block
@property (nonatomic,retain) EDAMSavedSearchScope * scope;              //@synthesize scope=_scope - In the implementation block
+(id)structName;
+(id)structFields;
-(NSString *)name;
-(NSString *)query;
-(void)setName:(NSString *)arg1 ;
-(void)setQuery:(NSString *)arg1 ;
-(NSNumber *)format;
-(void)setFormat:(NSNumber *)arg1 ;
-(EDAMSavedSearchScope *)scope;
-(void)setScope:(EDAMSavedSearchScope *)arg1 ;
-(void)setGuid:(NSString *)arg1 ;
-(NSString *)guid;
-(NSNumber *)updateSequenceNum;
-(void)setUpdateSequenceNum:(NSNumber *)arg1 ;
@end

