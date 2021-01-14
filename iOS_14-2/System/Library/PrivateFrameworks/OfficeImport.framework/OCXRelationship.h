/*
* Generated on Thursday, January 14, 2021 at 2:28:07 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
*/


@class NSString;

@interface OCXRelationship : NSObject {

	NSString* mIdString;
	NSString* mType;
	NSString* mTarget;
	BOOL mExternal;

}

@property (nonatomic,readonly) NSString * idString; 
@property (nonatomic,readonly) NSString * type; 
@property (nonatomic,readonly) NSString * target; 
-(NSString *)idString;
-(NSString *)type;
-(NSString *)target;
-(id)initWithId:(unsigned long long)arg1 type:(id)arg2 target:(id)arg3 external:(BOOL)arg4 ;
-(void)writeToStreamWriter:(id)arg1 ;
@end

