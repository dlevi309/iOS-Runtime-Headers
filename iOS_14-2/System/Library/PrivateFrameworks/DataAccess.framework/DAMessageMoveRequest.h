/*
* Generated on Thursday, January 14, 2021 at 2:23:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/DataAccess.framework/DataAccess
*/


@class NSString;

@interface DAMessageMoveRequest : NSObject {

	NSString* _message;
	NSString* _fromFolder;
	NSString* _toFolder;
	id _context;

}

@property (nonatomic,copy) NSString * message;                 //@synthesize message=_message - In the implementation block
@property (nonatomic,copy) NSString * fromFolder;              //@synthesize fromFolder=_fromFolder - In the implementation block
@property (nonatomic,copy) NSString * toFolder;                //@synthesize toFolder=_toFolder - In the implementation block
@property (nonatomic,retain) id context;                       //@synthesize context=_context - In the implementation block
-(void)setMessage:(NSString *)arg1 ;
-(NSString *)message;
-(id)context;
-(id)description;
-(unsigned long long)hash;
-(void)setFromFolder:(NSString *)arg1 ;
-(void)setToFolder:(NSString *)arg1 ;
-(NSString *)fromFolder;
-(id)initMoveRequestWithMessage:(id)arg1 fromFolder:(id)arg2 toFolder:(id)arg3 ;
-(NSString *)toFolder;
-(BOOL)isEqual:(id)arg1 ;
-(void)setContext:(id)arg1 ;
@end

