/*
* Generated on Thursday, January 14, 2021 at 2:27:09 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setFormat:(NSNumber *)arg1 ;
-(NSString *)query;
-(void)setScope:(EDAMSavedSearchScope *)arg1 ;
-(NSNumber *)format;
-(EDAMSavedSearchScope *)scope;
-(NSString *)guid;
-(NSString *)name;
-(void)setName:(NSString *)arg1 ;
-(void)setQuery:(NSString *)arg1 ;
-(void)setGuid:(NSString *)arg1 ;
-(NSNumber *)updateSequenceNum;
-(void)setUpdateSequenceNum:(NSNumber *)arg1 ;
@end

