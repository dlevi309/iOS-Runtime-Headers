/*
* Generated on Monday, March 1, 2021 at 2:31:47 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Message.framework/Message
*/

#import <libobjc.A.dylib/EFLoggable.h>

@class NSURL, NSString;

@interface MFFile : NSObject <EFLoggable> {

	BOOL _isPurgeable;
	NSURL* _url;

}

@property (nonatomic,retain) NSURL * url;                           //@synthesize url=_url - In the implementation block
@property (assign,nonatomic) BOOL isPurgeable;                      //@synthesize isPurgeable=_isPurgeable - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)log;
-(NSURL *)url;
-(void)setUrl:(NSURL *)arg1 ;
-(id)initWithFile:(id)arg1 account:(id)arg2 ;
-(BOOL)_isPurgeableAccount:(id)arg1 ;
-(BOOL)markPurgeableWithError:(id*)arg1 ;
-(BOOL)isPurgeable;
-(void)setIsPurgeable:(BOOL)arg1 ;
@end

