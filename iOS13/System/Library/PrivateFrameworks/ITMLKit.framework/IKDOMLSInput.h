/*
* Generated on Monday, March 1, 2021 at 2:31:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
*/

#import <ITMLKit/IKJSObject.h>
#import <libobjc.A.dylib/IKJSDOMLSInput.h>

@class NSString;

@interface IKDOMLSInput : IKJSObject <IKJSDOMLSInput> {

	BOOL _certifiedText;
	id _byteStream;
	NSString* _stringData;
	NSString* _encoding;

}

@property (nonatomic,retain) id byteStream;                      //@synthesize byteStream=_byteStream - In the implementation block
@property (nonatomic,retain) NSString * stringData;              //@synthesize stringData=_stringData - In the implementation block
@property (nonatomic,retain) NSString * encoding;                //@synthesize encoding=_encoding - In the implementation block
@property (assign,nonatomic) BOOL certifiedText;                 //@synthesize certifiedText=_certifiedText - In the implementation block
-(NSString *)encoding;
-(void)setEncoding:(NSString *)arg1 ;
-(NSString *)stringData;
-(id)byteStream;
-(void)setByteStream:(id)arg1 ;
-(void)setStringData:(NSString *)arg1 ;
-(BOOL)certifiedText;
-(void)setCertifiedText:(BOOL)arg1 ;
@end

