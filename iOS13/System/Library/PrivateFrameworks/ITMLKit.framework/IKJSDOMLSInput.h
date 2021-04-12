/*
* Generated on Monday, March 1, 2021 at 2:31:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
*/

@class NSString;


@protocol IKJSDOMLSInput <JSExport>
@property (nonatomic,retain) id byteStream; 
@property (nonatomic,retain) NSString * stringData; 
@property (nonatomic,retain) NSString * encoding; 
@property (assign,nonatomic) BOOL certifiedText; 
@required
-(NSString *)encoding;
-(void)setEncoding:(id)arg1;
-(NSString *)stringData;
-(id)byteStream;
-(void)setByteStream:(id)arg1;
-(void)setStringData:(id)arg1;
-(BOOL)certifiedText;
-(void)setCertifiedText:(BOOL)arg1;

@end

