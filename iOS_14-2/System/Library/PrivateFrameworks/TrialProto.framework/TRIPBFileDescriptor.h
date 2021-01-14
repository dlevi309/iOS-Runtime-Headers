/*
* Generated on Thursday, January 14, 2021 at 2:25:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TrialProto.framework/TrialProto
*/


@class NSString;

@interface TRIPBFileDescriptor : NSObject {

	NSString* package_;
	NSString* objcPrefix_;
	unsigned char syntax_;

}

@property (nonatomic,copy,readonly) NSString * package; 
@property (nonatomic,copy,readonly) NSString * objcPrefix; 
@property (nonatomic,readonly) unsigned char syntax; 
-(unsigned char)syntax;
-(NSString *)package;
-(id)initWithPackage:(id)arg1 objcPrefix:(id)arg2 syntax:(unsigned char)arg3 ;
-(NSString *)objcPrefix;
-(id)initWithPackage:(id)arg1 syntax:(unsigned char)arg2 ;
-(void)dealloc;
@end

