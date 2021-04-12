/*
* Generated on Thursday, January 14, 2021 at 2:25:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
*/

@class NSString;


@protocol IKJSDOMLSInput <JSExport>
@property (nonatomic,retain) id byteStream; 
@property (nonatomic,retain) NSString * stringData; 
@property (nonatomic,retain) NSString * encoding; 
@property (assign,nonatomic) BOOL certifiedText; 
@required
-(void)setEncoding:(id)arg1;
-(NSString *)encoding;
-(void)setByteStream:(id)arg1;
-(NSString *)stringData;
-(id)byteStream;
-(void)setStringData:(id)arg1;
-(BOOL)certifiedText;
-(void)setCertifiedText:(BOOL)arg1;

@end

