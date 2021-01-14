/*
* Generated on Thursday, January 14, 2021 at 2:22:48 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)initWithFile:(id)arg1 account:(id)arg2 ;
-(void)setUrl:(NSURL *)arg1 ;
-(BOOL)markPurgeableWithError:(id*)arg1 ;
-(BOOL)isPurgeable;
-(void)setIsPurgeable:(BOOL)arg1 ;
@end

