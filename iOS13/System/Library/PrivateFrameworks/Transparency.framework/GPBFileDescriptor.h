/*
* Generated on Monday, March 1, 2021 at 2:33:27 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Transparency.framework/Transparency
*/


@class NSString;

@interface GPBFileDescriptor : NSObject {

	NSString* package_;
	NSString* objcPrefix_;
	unsigned char syntax_;

}

@property (nonatomic,copy,readonly) NSString * package; 
@property (nonatomic,copy,readonly) NSString * objcPrefix; 
@property (nonatomic,readonly) unsigned char syntax; 
-(void)dealloc;
-(NSString *)package;
-(id)initWithPackage:(id)arg1 objcPrefix:(id)arg2 syntax:(unsigned char)arg3 ;
-(unsigned char)syntax;
-(NSString *)objcPrefix;
-(id)initWithPackage:(id)arg1 syntax:(unsigned char)arg2 ;
@end

